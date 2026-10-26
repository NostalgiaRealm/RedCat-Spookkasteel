/*
 * FUN_0051c504 at 0051c504
 * undefined __register FUN_0051c504(void)
 * Address ranges: 0051c504-0051c5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c504(void)

{
  uint uVar1;
  int local_8;
  
  local_8 = 1;
  do {
    uVar1 = local_8 - 1;
    if (1 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    FUN_00403094((int *)(&DAT_00574750)[uVar1 + 1]);
    uVar1 = local_8 - 1;
    if (1 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    (&DAT_00574750)[uVar1 + 1] = 0;
    uVar1 = local_8 - 1;
    if (1 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    FUN_00403094(*(int **)(&DAT_00574740 + (uVar1 + 1) * 4));
    uVar1 = local_8 - 1;
    if (1 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    *(undefined4 *)(&DAT_00574740 + (uVar1 + 1) * 4) = 0;
    uVar1 = local_8 - 1;
    if (1 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    FUN_00403094((int *)(&DAT_00574748)[uVar1 + 1]);
    uVar1 = local_8 - 1;
    if (1 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    (&DAT_00574748)[uVar1 + 1] = 0;
    local_8 = local_8 + 1;
  } while (local_8 != 3);
  return;
}

