-- THIS LUA SCRIPT IS FOR ASEPRITE (SPRITE DRAWING PROGRAM)
-- IT EXPORTS OUR DRAWN SPRITES BITMAPS THAT CAN BE USED IN MASM

local sprite = app.activeSprite

-- Check constraints
if sprite == nil then
  app.alert("No Sprite...")
  return
end
if sprite.colorMode ~= ColorMode.INDEXED then
  app.alert("Sprite needs to be indexed")
  return
end

local function getPaletteData(palette)
	local ncolors = #palette
	local res = string.format("%i\n", ncolors)

	for i=0, ncolors-1 do
		local color = palette:getColor(i)
		res = res .. string.format("%i %i %i %i\n", color.red, color.green, color.blue, color.alpha)		
	end

	return res
end

local function getIndexData(img, x, y, w, h, sn)
	local res = ""
	res = res .. string.upper(sn) .. " db " .. w .. ", " .. h .. "\n"
	local sn_len = #sn
	local padding = string.rep(" ", #sn)

	for y = 0,h-1 do
		res = res .. padding .. " db "
		for x = 0, w-1 do
			px = img:getPixel(x, y)
			res = res .. string.format("0%xh", px)

			if x ~= w-1 then
				res = res .. ", "
			end
		end
		res = res .. "\n"
	end

	return res
end

local function exportFrame(frm, sn)
	if frm == nil then
		frm = 1
	end

	local img = Image(sprite.spec)
	img:drawSprite(sprite, frm)
	io.write(getIndexData(img, x, y, sprite.width, sprite.height, sn))
end


local dlg = Dialog()
dlg:file{ id="exportFile",
          label="File",
          title="Index Export",
          open=false,
          save=true,
        --filename= p .. fn .. "pip",
          filetypes={"txt", "pip" }}

dlg:check{ id="onlyCurrentFrame",
           text="Export only current frame",
           selected=true }

dlg:button{ id="ok", text="OK" }
dlg:button{ id="cancel", text="Cancel" }
dlg:show()
local data = dlg.data
if data.ok then
	local f = io.open(data.exportFile, "w")

	-- Extract the file name to use as sprite name
	local fp = data.exportFile
	local sn = fp:match("^.+/(.+)%.[^.]+$")
	if not sn then 
		sn = fp:match("^.+\\(.+)%.[^.]+$")
	end

	sn = sn .. "_SPRITE"

	io.output(f)

	if data.onlyCurrentFrame then
		exportFrame(app.activeFrame, sn)
	else
	 	for i = 1,#sprite.frames do
	 		io.write(string.format(";Frame %d\n", i))
	 		exportFrame(i, sn)
		end
	end

	io.close(f)
end