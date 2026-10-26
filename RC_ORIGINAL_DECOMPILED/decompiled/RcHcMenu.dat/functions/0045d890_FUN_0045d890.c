/*
 * FUN_0045d890 at 0045d890
 * undefined __register FUN_0045d890(undefined4 * param_1)
 * Address ranges: 0045d890-0045d90d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045d890(undefined4 *param_1)

{
  uint uVar1;
  int local_10;
  int local_c;
  
  if (0 < (int)param_1[2]) {
    uVar1 = param_1[1] - 1;
    if (SBORROW4(param_1[1],1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    if (-1 < (int)uVar1) {
      local_10 = uVar1 + 1;
      local_c = 0;
      do {
        (**(code **)*param_1)(param_1,local_c);
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    if ((longlong)(int)((longlong)(int)param_1[2] * (longlong)(int)param_1[5]) !=
        (longlong)(int)param_1[2] * (longlong)(int)param_1[5]) {
      thunk_FUN_00402874((uint)param_1);
    }
    FUN_00402800(param_1[4]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
  }
  return;
}

