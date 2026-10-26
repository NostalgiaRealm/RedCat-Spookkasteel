/*
 * FUN_100031a0 at 100031a0
 * undefined4 __stdcall FUN_100031a0(void)
 * Address ranges: 100031a0-10003221
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100031a0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_100020f0(s_____D3DMain_GetTextureMemory_____10014720);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0x10005000;
  piVar2 = DAT_100274a8;
  iVar1 = (**(code **)(*DAT_100274a8 + 0x5c))(DAT_100274a8,&local_10,local_14,local_18);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_Getting_DD_capabilities_failed_w_100146d8);
    return 0;
  }
  DAT_10038e68 = piVar2;
  FUN_100020f0(s_Ram_free___i_100146c8);
  return 1;
}

