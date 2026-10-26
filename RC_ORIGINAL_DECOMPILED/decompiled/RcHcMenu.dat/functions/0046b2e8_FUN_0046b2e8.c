/*
 * FUN_0046b2e8 at 0046b2e8
 * undefined __register FUN_0046b2e8(int param_1, undefined4 param_2, undefined4 param_3, uint param_4, int param_5)
 * Address ranges: 0046b2e8-0046b347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046b2e8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined4 extraout_ECX;
  bool bVar1;
  
  if ((*(int *)(param_1 + 0xdc) == 0) && (*(int *)(param_1 + 0xd8) == 0)) {
    bVar1 = false;
    if (*(int *)(param_1 + 0xe4) == 0) {
      bVar1 = *(int *)(param_1 + 0xe0) == 0;
    }
    if (bVar1) goto LAB_0046b337;
  }
  FUN_0046b068(param_1,param_2,param_3,*(uint *)(param_1 + 0xe0),*(int *)(param_1 + 0xe4),
               *(uint *)(param_1 + 0xd8),*(int *)(param_1 + 0xdc),param_4,param_5);
  param_3 = extraout_ECX;
LAB_0046b337:
  FUN_00469acc(param_1,&param_4,CONCAT31((int3)((uint)param_3 >> 8),1));
  return;
}

