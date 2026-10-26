/*
 * FUN_005feb94 at 005feb94
 * undefined FUN_005feb94(void)
 * Address ranges: 005feb94-005febd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005feb94(int *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 < *(uint *)(iVar1 + 0xc)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (((iVar2 == 0) && (param_3 != '\0')) && (*(char *)(iVar1 + 0x14) != '\0')) {
    if (param_2 < *(uint *)(DAT_0070fc00 + 0xc)) {
      iVar2 = *(int *)(*(int *)(DAT_0070fc00 + 8) + param_2 * 4);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

