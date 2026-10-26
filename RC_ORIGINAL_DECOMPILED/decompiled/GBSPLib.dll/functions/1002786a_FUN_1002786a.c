/*
 * FUN_1002786a at 1002786a
 * undefined FUN_1002786a(void)
 * Address ranges: 1002786a-100278f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002786a(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((*(uint *)(param_1 + 0xc) & 0x83) == 0) ||
     (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    puVar3 = (undefined4 *)FUN_1002b3dc();
    *puVar3 = 0x16;
    iVar2 = -1;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10027919(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10029dab(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        *(undefined4 *)(param_1 + 0x18) = 0x200;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    iVar2 = FUN_1002b3ee(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    iVar2 = (iVar2 != -1) - 1;
  }
  return iVar2;
}

