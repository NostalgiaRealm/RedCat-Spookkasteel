/*
 * FUN_10019cc0 at 10019cc0
 * undefined FUN_10019cc0(void)
 * Address ranges: 10019cc0-10019d19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10019cc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_10019ae0();
  }
  else {
    iVar1 = FUN_10019be0(*(undefined4 *)(param_1 + 0xc));
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_1001a050();
  if (iVar2 == 0) {
    FUN_10019d20();
    return 0;
  }
  return iVar1;
}

