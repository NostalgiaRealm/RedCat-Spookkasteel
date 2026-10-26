/*
 * FUN_00457404 at 00457404
 * undefined4 __register FUN_00457404(undefined1 param_1)
 * Address ranges: 00457404-00457422;0045743b-00457489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00457404(undefined1 param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  switch(param_1) {
  case 0:
    local_c = 2;
    break;
  case 1:
    local_c = 0;
    break;
  case 2:
    local_c = 1;
    break;
  case 3:
    local_c = 5;
    break;
  case 4:
    local_c = 4;
    break;
  case 5:
    local_c = 3;
    break;
  default:
    FUN_00403d94("DaviMsgBtnToWindows:  Unhandled case-part");
  }
  return local_c;
}

