/*
 * FUN_004cb9a4 at 004cb9a4
 * undefined __register FUN_004cb9a4(int * param_1, char param_2)
 * Address ranges: 004cb9a4-004cba0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cb9a4(int *param_1,char param_2)

{
  if (param_1[0x4a] == 0) {
    param_2 = '\0';
  }
  if ((param_2 != (char)param_1[0x4c]) &&
     (((char)param_1[0x4c] == '\0' || (*(char *)((int)param_1 + 0x132) != '\0')))) {
    *(char *)(param_1 + 0x4c) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0x142) = 0;
      (**(code **)(*param_1 + 0x78))();
    }
    else {
      if (*(char *)((int)param_1 + 0x142) == '\0') {
        (**(code **)(*param_1 + 0x74))();
      }
      *(undefined1 *)((int)param_1 + 0x142) = 3;
    }
    if (param_2 != '\0') {
      FUN_004cb96c((int)param_1);
    }
  }
  return;
}

