/*
 * FUN_004129b8 at 004129b8
 * uint __register FUN_004129b8(int param_1, uint param_2)
 * Address ranges: 004129b8-004129cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004129b8(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    return -(uint)((*(byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3)) >> (param_2 & 7) & 1) !=
                  0) & 1;
  }
  piVar1 = FUN_0040cfa8((int *)&DAT_004105ac,'\x01',(undefined4 *)PTR_PTR_00572518);
  uVar2 = FUN_0040382c(piVar1);
  return uVar2;
}

