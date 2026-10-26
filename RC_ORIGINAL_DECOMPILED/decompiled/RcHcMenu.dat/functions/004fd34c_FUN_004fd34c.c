/*
 * FUN_004fd34c at 004fd34c
 * undefined __register FUN_004fd34c(int param_1, char param_2)
 * Address ranges: 004fd34c-004fd3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fd34c(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x270) == '\0') {
    if (*(char *)(param_1 + 0x271) != '\0') {
      if (param_2 == ' ') {
        *(double *)(param_1 + 0x268) = -*(double *)(param_1 + 0x268);
      }
      else if (param_2 == '%') {
        *(double *)(param_1 + 0x268) = *(double *)(param_1 + 0x268) / 100.0;
      }
    }
  }
  else if (param_2 == ' ') {
    *(double *)(param_1 + 0x260) = -*(double *)(param_1 + 0x260);
  }
  else if (param_2 == '%') {
    *(double *)(param_1 + 0x260) = *(double *)(param_1 + 0x260) / 100.0;
  }
  return;
}

