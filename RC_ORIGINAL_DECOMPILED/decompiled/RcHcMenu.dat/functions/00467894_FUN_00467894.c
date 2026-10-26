/*
 * FUN_00467894 at 00467894
 * undefined __register FUN_00467894(int param_1, undefined4 param_2)
 * Address ranges: 00467894-004678df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467894(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00467918(param_1);
  if (((char)uVar1 == '\0') || (*(char *)(param_1 + 0x21) == '\x1b')) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    FUN_00412c80(param_1,'\0');
    iVar2 = FUN_004677b8(param_1);
    if (iVar2 != 0) {
      iVar3 = FUN_00467870(param_1);
      if (iVar3 != 0) {
        uVar1 = FUN_00467870(param_1);
        (**(code **)(iVar2 + 0x34))(iVar2,uVar1);
      }
    }
  }
  return;
}

