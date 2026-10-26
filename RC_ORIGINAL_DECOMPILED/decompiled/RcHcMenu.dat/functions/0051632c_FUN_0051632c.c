/*
 * FUN_0051632c at 0051632c
 * int __register FUN_0051632c(int param_1, int * param_2)
 * Address ranges: 0051632c-00516392
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0051632c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_18;
  int local_14;
  
  iVar2 = FUN_0045ba40(*(int *)(param_1 + 8));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_14 = 0;
    do {
      piVar4 = (int *)(**(code **)**(undefined4 **)(param_1 + 8))
                                (*(undefined4 **)(param_1 + 8),local_14);
      cVar1 = FUN_00515c54(piVar4,param_2);
      if (cVar1 != '\0') {
        return local_14;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return -1;
}

