/*
 * FUN_004c9180 at 004c9180
 * undefined1 __register FUN_004c9180(int * param_1)
 * Address ranges: 004c9180-004c91dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004c9180(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_9;
  
  local_9 = 0;
  piVar2 = FUN_0044879c(param_1);
  if (piVar2 != (int *)0x0) {
    for (; param_1 != piVar2; param_1 = (int *)param_1[9]) {
      if (*(char *)((int)param_1 + 0x47) == '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*param_1 + 0x4c))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    local_9 = 1;
  }
  return local_9;
}

