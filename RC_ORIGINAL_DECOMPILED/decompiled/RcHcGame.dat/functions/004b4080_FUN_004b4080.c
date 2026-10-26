/*
 * FUN_004b4080 at 004b4080
 * undefined FUN_004b4080(void)
 * Address ranges: 004b4080-004b40d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b4080(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x17c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  FUN_004b8fb0();
  return;
}

