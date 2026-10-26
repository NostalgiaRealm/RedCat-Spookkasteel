/*
 * FUN_00442da0 at 00442da0
 * undefined FUN_00442da0(void)
 * Address ranges: 00442da0-00442dea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00442da0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iVar2 + -1));
      }
      else {
        *(char *)(iVar2 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

