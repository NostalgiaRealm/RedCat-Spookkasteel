/*
 * FUN_00457690 at 00457690
 * undefined4 __register FUN_00457690(undefined1 param_1, char param_2)
 * Address ranges: 00457690-004576bf;004576d8-00457853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00457690(undefined1 param_1,char param_2)

{
  undefined4 local_c;
  
  local_c = 0;
  if (param_2 != '\0') {
    switch(param_1) {
    case 0:
      if (param_2 == '\x01') {
        local_c = 0;
      }
      else if (param_2 == '\x02') {
        local_c = 0x100;
      }
      else if (param_2 == '\x03') {
        local_c = 0x200;
      }
      else {
        FUN_00403d94("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 1:
      if (param_2 == '\x04') {
        local_c = 0;
      }
      else {
        FUN_00403d94("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 2:
      if (param_2 == '\x04') {
        local_c = 0;
      }
      else if (param_2 == '\x05') {
        local_c = 0x100;
      }
      else {
        FUN_00403d94("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 3:
      if (param_2 == '\x02') {
        local_c = 0;
      }
      else if (param_2 == '\x05') {
        local_c = 0x100;
      }
      else {
        FUN_00403d94("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 4:
      if (param_2 == '\x06') {
        local_c = 0;
      }
      else if (param_2 == '\a') {
        local_c = 0x100;
      }
      else {
        FUN_00403d94("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 5:
      if (param_2 == '\x05') {
        local_c = 0x200;
      }
      else if (param_2 == '\x06') {
        local_c = 0;
      }
      else if (param_2 == '\a') {
        local_c = 0x100;
      }
      else {
        FUN_00403d94("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    default:
      FUN_00403d94("DaviDefaultBtnToWindows:  Unhandled case-part");
    }
  }
  return local_c;
}

