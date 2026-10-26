/*
 * FUN_00516520 at 00516520
 * undefined1 __register FUN_00516520(int param_1, undefined4 * param_2)
 * Address ranges: 00516520-0051659b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00516520(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_1c;
  int local_18;
  
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 8));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_18 = 0;
    do {
      piVar3 = (int *)(**(code **)**(undefined4 **)(param_1 + 8))
                                (*(undefined4 **)(param_1 + 8),local_18);
      if ((char)piVar3[1] != '\0') {
        FUN_00515ebc(piVar3,param_2);
        *(int *)(param_1 + 4) = local_18;
        return 1;
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return 0;
}

