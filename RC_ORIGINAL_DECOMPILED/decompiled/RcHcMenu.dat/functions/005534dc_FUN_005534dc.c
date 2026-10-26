/*
 * FUN_005534dc at 005534dc
 * undefined __register FUN_005534dc(int * param_1)
 * Address ranges: 005534dc-00553593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005534dc(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_118 = &LAB_00553594;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_110);
  FUN_00403fd4(&local_10,local_110);
  FUN_004040f0((int *)&local_c,3);
  puVar1 = local_c;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_00553710();
  FUN_00432958((int *)local_8[0xbb],extraout_EDX,extraout_ECX);
  FUN_00432bf4((int *)local_8[0xbb],extraout_EDX_00,extraout_ECX_00);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "TGameMenuScreen.Disable";
  FUN_00403dd4(&local_10,2);
  return;
}

