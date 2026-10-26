/*
 * FUN_00413028 at 00413028
 * undefined __register FUN_00413028(int * param_1, int * param_2)
 * Address ranges: 00413028-004130d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413028(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  int iStack_130;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_004130d6;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  FUN_00402fe0(*param_1,local_10c);
  FUN_00403fd4(param_2,local_10c);
  iVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00403270(param_1,extraout_EDX_00,extraout_ECX_00);
    FUN_00403270(piVar2,&local_8,extraout_ECX_01);
    if (local_8 != 0) {
      FUN_004130f0(param_1,&local_c);
      if (local_c != 0) {
        iStack_130 = local_c;
        FUN_004040f0(param_2,3);
      }
    }
  }
  *in_FS_OFFSET = iStack_130;
  FUN_00403dd4(&local_c,2);
  return;
}

