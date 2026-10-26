/*
 * FUN_004377cc at 004377cc
 * uint __register FUN_004377cc(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004377cc-00437836
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004377cc(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = CONCAT31((int3)((uint)param_3 >> 8),1);
  piVar1 = FUN_0044879c(param_1);
  uVar2 = extraout_ECX;
  if (((piVar1 != (int *)0x0) && (param_1 != piVar1)) && (*(char *)((int)piVar1 + 0x215) != '\0')) {
    piVar1 = (int *)FUN_004377cc(piVar1,param_2,extraout_ECX);
    uVar2 = extraout_ECX_00;
    if ((char)piVar1 != '\0') goto LAB_0043782f;
  }
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    local_10._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 4),(undefined1)local_10);
    FUN_00403270(param_1,(int)&local_10 + 1,uVar2);
    piVar1 = (int *)0x0;
    *(ushort *)(param_2 + 4) = (ushort)local_10._1_1_;
    if (*(char *)(param_2 + 4) == '\0') goto LAB_0043782f;
  }
  local_10 = 0;
LAB_0043782f:
  return CONCAT31((int3)((uint)piVar1 >> 8),(undefined1)local_10);
}

