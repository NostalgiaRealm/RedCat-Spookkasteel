/*
 * FUN_0061ca6b at 0061ca6b
 * undefined FUN_0061ca6b(void)
 * Address ranges: 0061ca6b-0061cafa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061ca6b(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_3,param_2);
  if (((*(uint *)(param_1 + 0xc) & 0x83) == 0) ||
     (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    DAT_0070ff98 = 0x16;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_4 == 1) {
      lVar2 = FUN_0061c6f2(param_1);
      lVar3 = lVar2 + lVar3;
      param_4 = 0;
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
    lVar3 = FUN_0061e26e(*(undefined4 *)(param_1 + 0x10),lVar3,param_4);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}

