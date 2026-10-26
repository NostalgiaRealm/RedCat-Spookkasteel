/*
 * FUN_100042f0 at 100042f0
 * undefined4 __stdcall FUN_100042f0(void)
 * Address ranges: 100042f0-10004371
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100042f0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_10005fc0((byte *)s_____D3DMain_GetTextureMemory_____10017b74);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = &LAB_10005000;
  piVar2 = DAT_1001bcb0;
  iVar1 = (**(code **)(*DAT_1001bcb0 + 0x5c))(DAT_1001bcb0,&local_10,local_14,local_18);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_10005fc0((byte *)s_Getting_DD_capabilities_failed_w_10017b98);
    return 0;
  }
  DAT_10028938 = piVar2;
  FUN_10005fc0((byte *)s_Ram_free___i_10017be0);
  return 1;
}

