/*
 * FUN_004abf90 at 004abf90
 * undefined FUN_004abf90(void)
 * Address ranges: 004abf90-004abfda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004abf90(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  FUN_004ab040();
  return;
}

