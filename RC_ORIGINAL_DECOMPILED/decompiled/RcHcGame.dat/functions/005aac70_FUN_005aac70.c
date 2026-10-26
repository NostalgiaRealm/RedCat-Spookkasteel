/*
 * FUN_005aac70 at 005aac70
 * undefined FUN_005aac70(void)
 * Address ranges: 005aac70-005aac92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005aac70(int param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (((param_2 != iVar1) && (iVar1 != 0)) && (*(char *)(iVar1 + 0x24) != '\0')) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

