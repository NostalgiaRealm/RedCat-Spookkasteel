/*
 * FUN_004983f0 at 004983f0
 * undefined __register FUN_004983f0(int param_1, undefined2 * param_2, undefined2 * param_3)
 * Address ranges: 004983f0-0049844c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004983f0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *local_1c;
  undefined2 *local_18;
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x8c) + -1;
  local_1c = param_2;
  local_18 = param_3;
  if (-1 < local_14) {
    do {
      *local_18 = *local_1c;
      *(undefined1 *)(local_18 + 1) = *(undefined1 *)(local_1c + 1);
      *(undefined1 *)((int)local_18 + 3) = 0xff;
      local_1c = (undefined2 *)((int)local_1c + 3);
      local_18 = local_18 + 2;
      local_14 = local_14 + -1;
    } while (local_14 != -1);
  }
  return;
}

