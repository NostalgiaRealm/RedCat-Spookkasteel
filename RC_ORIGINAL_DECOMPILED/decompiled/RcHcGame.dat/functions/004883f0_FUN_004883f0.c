/*
 * FUN_004883f0 at 004883f0
 * undefined FUN_004883f0(void)
 * Address ranges: 004883f0-00488434
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004883f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_0051a260();
  return;
}

