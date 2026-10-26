/*
 * FUN_00457324 at 00457324
 * undefined4 __register FUN_00457324(undefined1 param_1)
 * Address ranges: 00457324-00457342;0045735b-004573a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00457324(undefined1 param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  switch(param_1) {
  case 0:
    local_c = 0x20;
    break;
  case 1:
    local_c = 0;
    break;
  case 2:
    local_c = 0x10;
    break;
  case 3:
    local_c = 0x30;
    break;
  case 4:
    local_c = 0x40;
    break;
  case 5:
    local_c = 0x30;
    break;
  default:
    FUN_00403d94("DaviMsgToWindows:  Unhandled case-part");
  }
  return local_c;
}

