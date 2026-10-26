/*
 * FUN_0060e481 at 0060e481
 * undefined FUN_0060e481(void)
 * Address ranges: 0060e481-0060e50c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060e481(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0xc) & 0x83) == 0) ||
     (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    DAT_0070ff98 = 0x16;
    iVar2 = -1;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_0061c913(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_0060e601(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        *(undefined4 *)(param_1 + 0x18) = 0x200;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    iVar2 = FUN_0061c879(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    iVar2 = (iVar2 != -1) - 1;
  }
  return iVar2;
}

