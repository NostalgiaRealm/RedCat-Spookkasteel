/*
 * FUN_004997cc at 004997cc
 * undefined __register FUN_004997cc(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004997cc-004998bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004997cc(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x474) == 0) {
    FUN_004990a4(param_1,-1,param_3);
    *(char *)(param_1 + 0x10b) = (char)param_3;
  }
  else {
    FUN_00499160(param_1,*(int *)(param_2 + 0x47c),*(int *)(param_2 + 0x428),
                 *(char *)(param_2 + 0x41c),(char)param_3,(undefined4 *)(param_2 + 0x15),
                 (int *)(param_2 + 0x444),*(undefined **)(param_2 + 8));
    if ((char)param_1[0x107] == '\0') {
      FUN_00402944(*(undefined4 **)(param_2 + 0x440),(undefined4 *)param_1[0x110],
                   *(uint *)(param_1[3] + 0x14));
    }
    else {
      *(undefined4 *)(param_1[3] + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14);
      iVar1 = FUN_004027e8(*(int *)(param_1[3] + 0x14));
      param_1[0x110] = iVar1;
      FUN_00402944(*(undefined4 **)(param_2 + 0x440),(undefined4 *)param_1[0x110],
                   *(uint *)(param_1[3] + 0x14));
    }
  }
  return;
}

