/*
 * FUN_004e4440 at 004e4440
 * undefined FUN_004e4440(void)
 * Address ranges: 004e4440-004e4501
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004e4440(int param_1)

{
  char cVar1;
  int local_4;
  
  local_4 = param_1;
  cVar1 = FUN_004e3f70(&local_4);
  if (cVar1 != '\0') {
    FUN_0057b030(param_1 + 0x130);
    if ((0.0 < *(float *)(param_1 + 0x160)) && (0.0 < *(float *)(param_1 + 400))) {
      if (*(float *)(param_1 + 400) < *(float *)(param_1 + 0x18c)) {
        FUN_0057b140(*(float *)(param_1 + 0x160) / *(float *)(param_1 + 0x18c));
        *(undefined1 *)(param_1 + 0x1f0) = 0;
        return;
      }
      FUN_0057b140(*(float *)(param_1 + 0x160) / *(float *)(param_1 + 400));
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      return;
    }
    FUN_0057b140(0);
    *(undefined1 *)(param_1 + 0x1f0) = 0;
  }
  return;
}

