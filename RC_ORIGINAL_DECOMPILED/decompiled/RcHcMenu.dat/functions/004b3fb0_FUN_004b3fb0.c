/*
 * FUN_004b3fb0 at 004b3fb0
 * undefined __register FUN_004b3fb0(int param_1)
 * Address ranges: 004b3fb0-004b4031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b3fb0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte local_2c [28];
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(char *)(param_1 + 0x24) != '\0')) {
    local_8 = param_1;
    iVar2 = FUN_0048ec24(*(int *)(*(int *)(param_1 + 0x3c) + 0x18));
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_10 = uVar3 + 1;
      local_c = 0;
      do {
        FUN_0048f02c(*(int **)(*(int *)(local_8 + 0x3c) + 0x18),local_c,(undefined4 *)local_2c);
        cVar1 = FUN_0048ef44(*(int **)(local_8 + 0x28),local_2c);
        if (cVar1 == '\0') {
          (**(code **)(**(int **)(local_8 + 0x28) + 0xc))(*(int **)(local_8 + 0x28),local_2c);
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return;
}

