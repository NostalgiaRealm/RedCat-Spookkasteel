/*
 * FUN_0051659c at 0051659c
 * undefined1 __register FUN_0051659c(int param_1, undefined4 * param_2)
 * Address ranges: 0051659c-00516625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0051659c(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_1c;
  uint local_18;
  
  local_18 = *(int *)(param_1 + 4) + 1;
  if (SCARRY4(*(int *)(param_1 + 4),1)) {
    local_18 = thunk_FUN_00402874(local_18);
  }
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 8));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if ((int)local_18 <= (int)uVar2) {
    local_1c = (uVar2 - local_18) + 1;
    do {
      piVar3 = (int *)(**(code **)**(undefined4 **)(param_1 + 8))
                                (*(undefined4 **)(param_1 + 8),local_18);
      if ((char)piVar3[1] != '\0') {
        FUN_00515ebc(piVar3,param_2);
        *(uint *)(param_1 + 4) = local_18;
        return 1;
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return 0;
}

