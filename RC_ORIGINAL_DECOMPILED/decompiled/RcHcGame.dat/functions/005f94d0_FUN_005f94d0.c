/*
 * FUN_005f94d0 at 005f94d0
 * undefined FUN_005f94d0(void)
 * Address ranges: 005f94d0-005f9542
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005f94d0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == *(int *)(param_2 + 0xc)) {
    return param_1;
  }
  do {
    FUN_005e5d20(param_1,&DAT_006a1334);
    if (*(char *)(iVar2 + 0xc) == '\0') {
      uVar4 = *(undefined4 *)(iVar2 + 8);
      puVar3 = &DAT_006b15b8;
      uVar1 = FUN_005e7140(*(undefined4 *)(iVar2 + 4));
      FUN_005e5d20(uVar1,puVar3,uVar4);
      FUN_005e7140(uVar4);
    }
    FUN_005e5d20(param_1,&DAT_006a1338);
    iVar2 = iVar2 + 0x10;
  } while (iVar2 != *(int *)(param_2 + 0xc));
  return param_1;
}

