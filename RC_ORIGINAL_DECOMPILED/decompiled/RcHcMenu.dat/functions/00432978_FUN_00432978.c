/*
 * FUN_00432978 at 00432978
 * undefined __register FUN_00432978(int * param_1, int param_2)
 * Address ranges: 00432978-004329f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432978(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[9] != 0) {
    iVar2 = FUN_004123e0(*(int *)(param_1[9] + 0x134),(int)param_1);
    if (-1 < iVar2) {
      iVar1 = (*(int **)(param_1[9] + 0x134))[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar2 != param_2) {
        FUN_00412224(*(int **)(param_1[9] + 0x134),iVar2);
        FUN_00412400(*(int **)(param_1[9] + 0x134),param_2,(int)param_1);
        FUN_00432b50((int)param_1,*(char *)((int)param_1 + 0x47),'\x01');
        piVar3 = (int *)FUN_004487c4(param_1);
        if ((*(byte *)(piVar3 + 0x11) & 4) != 0) {
          FUN_00403270(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
    }
  }
  return;
}

