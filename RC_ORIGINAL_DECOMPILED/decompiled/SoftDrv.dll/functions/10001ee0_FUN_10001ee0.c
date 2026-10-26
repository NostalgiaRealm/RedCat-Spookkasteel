/*
 * FUN_10001ee0 at 10001ee0
 * undefined FUN_10001ee0(void)
 * Address ranges: 10001ee0-10001fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10001ee0(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *local_14;
  tagRECT local_10;
  
  local_14 = _malloc(0x34);
  if (local_14 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  BVar1 = GetClientRect(param_1,&local_10);
  if (BVar1 == 0) {
    return (undefined4 *)0x0;
  }
  local_14[4] = (local_10.right - local_10.left) + 3U & 0xfffffffc;
  local_14[5] = local_10.bottom - local_10.top;
  if ((int)local_14[4] < 1) {
    return (undefined4 *)0x0;
  }
  if ((int)local_14[5] < 1) {
    return (undefined4 *)0x0;
  }
  local_14[1] = 0;
  local_14[2] = param_4;
  local_14[3] = ((int)(local_14[2] + ((int)local_14[2] >> 0x1f & 7U)) >> 3) * local_14[4];
  *local_14 = param_1;
  local_14[10] = 0;
  local_14[0xb] = 0;
  local_14[0xc] = 0;
  iVar2 = FUN_10001fe0(local_14[4],local_14[5],param_4,param_1,local_14 + 7);
  if (iVar2 == 0) {
    FUN_100024f0(&local_14);
    return (undefined4 *)0x0;
  }
  return local_14;
}

