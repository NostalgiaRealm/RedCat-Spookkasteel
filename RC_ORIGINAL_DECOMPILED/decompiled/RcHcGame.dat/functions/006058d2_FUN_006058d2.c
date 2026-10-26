/*
 * FUN_006058d2 at 006058d2
 * undefined FUN_006058d2(void)
 * Address ranges: 006058d2-006058fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_006058d2(int param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 4) != 0) &&
      (cVar1 = *(char *)(*(int *)(param_1 + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
    FUN_006058fe(*(undefined4 *)(param_1 + 8),0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0xff;
  }
  return;
}

