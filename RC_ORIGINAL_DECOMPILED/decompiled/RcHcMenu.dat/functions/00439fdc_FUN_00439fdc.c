/*
 * FUN_00439fdc at 00439fdc
 * undefined __register FUN_00439fdc(HWND param_1, int param_2, int param_3, int * param_4)
 * Address ranges: 00439fdc-0043a01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439fdc(HWND param_1,int param_2,int param_3,int *param_4)

{
  tagRECT local_1c;
  tagPOINT local_c;
  
  local_c.x = param_2;
  local_c.y = param_3;
  ClientToScreen(param_1,&local_c);
  GetWindowRect(param_1,&local_1c);
  *param_4 = local_c.x - local_1c.left;
  param_4[1] = local_c.y - local_1c.top;
  return;
}

