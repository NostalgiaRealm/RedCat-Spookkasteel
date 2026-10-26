/*
 * FUN_00499ba4 at 00499ba4
 * undefined __register FUN_00499ba4(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00499ba4-00499c38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00499ba4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (*(char *)(param_2 + 0x41c) == '\0') {
    FUN_004997cc(param_1,param_2,param_3);
  }
  else {
    FUN_00499160(param_1,*(int *)(param_2 + 0x47c),*(int *)(param_2 + 0x428),'\0',(char)param_3,
                 (undefined4 *)(param_2 + 0x15),(int *)(param_2 + 0x444),
                 *(undefined **)(param_2 + 8));
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x10);
    if (iVar1 == 1) {
      FUN_00499a8c();
    }
    else if (iVar1 == 2) {
      FUN_004998c0();
    }
    else {
      FUN_004997cc(param_1,param_2,CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_3));
    }
  }
  return;
}

