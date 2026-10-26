/*
 * FUN_0045c6a4 at 0045c6a4
 * undefined __register FUN_0045c6a4(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0045c6a4-0045c747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045c6a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int *in_FS_OFFSET;
  byte **ppbVar3;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  byte *local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_0045c748;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  ppbVar3 = &local_c;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3,ppbVar3,0);
  iVar1 = FUN_00404030((int)local_c);
  iVar2 = extraout_ECX;
  if (((2 < iVar1) && (*local_c == 0x30)) && ((local_c[1] == 0x58 || (local_c[1] == 0x78)))) {
    FUN_00404238((int)local_c,3,0x7fffffff,(int *)&local_10);
    FUN_0040407c((int *)&local_c,(undefined4 *)&DAT_0045c764,local_10);
    iVar2 = extraout_ECX_00;
  }
  FUN_00409c80(local_c,param_4,iVar2);
  *in_FS_OFFSET = (int)ppbVar3;
  puStack_24 = &LAB_0045c74f;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

