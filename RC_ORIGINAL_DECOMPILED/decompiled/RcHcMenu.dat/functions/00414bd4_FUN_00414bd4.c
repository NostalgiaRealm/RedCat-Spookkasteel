/*
 * FUN_00414bd4 at 00414bd4
 * LPCVOID __register FUN_00414bd4(int param_1, SIZE_T * param_2)
 * Address ranges: 00414bd4-00414c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCVOID FUN_00414bd4(int param_1,SIZE_T *param_2)

{
  int *piVar1;
  LPCVOID pvVar2;
  LPCVOID extraout_ECX;
  
  if (0 < (int)*param_2) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  pvVar2 = *(LPCVOID *)(param_1 + 4);
  if (*param_2 != *(SIZE_T *)(param_1 + 0x10)) {
    if (*param_2 == 0) {
      FUN_00408540(pvVar2);
      pvVar2 = (LPCVOID)0x0;
    }
    else {
      if (*(SIZE_T *)(param_1 + 0x10) == 0) {
        pvVar2 = (LPCVOID)FUN_00408514((uint)*(ushort *)PTR_DAT_005724cc,*param_2);
      }
      else {
        pvVar2 = (LPCVOID)FUN_00408524(pvVar2,*param_2,(uint)*(ushort *)PTR_DAT_005724cc);
      }
      if (pvVar2 == (LPCVOID)0x0) {
        piVar1 = FUN_0040cfa8((int *)&DAT_00410284,'\x01',(undefined4 *)PTR_PTR_0057258c);
        FUN_0040382c(piVar1);
        pvVar2 = extraout_ECX;
      }
    }
  }
  return pvVar2;
}

