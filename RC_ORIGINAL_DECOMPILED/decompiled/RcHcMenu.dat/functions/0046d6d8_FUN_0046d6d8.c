/*
 * FUN_0046d6d8 at 0046d6d8
 * undefined __register FUN_0046d6d8(VARIANTARG * param_1, int * param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0046d6d8-0046d815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d6d8(VARIANTARG *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  LONG LVar2;
  int iVar3;
  LONG extraout_ECX;
  VARIANTARG *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  VARIANTARG *extraout_ECX_02;
  VARIANTARG *extraout_ECX_03;
  VARIANTARG *pVVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined4 local_24 [3];
  int local_c;
  VARIANTARG *local_8;
  
  local_24[2] = &stack0xfffffffc;
  iVar3 = 5;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_24[1] = &LAB_0046d816;
  local_24[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)local_24;
  local_8 = param_1;
  FUN_00403db0(param_2);
  bVar1 = FUN_00405df8((int)local_8);
  if (bVar1) {
    LVar2 = FUN_00405d8c((int)local_8,1,extraout_ECX);
    FUN_00403db0((int *)&stack0xfffffff0);
    if (-1 < LVar2) {
      iVar6 = LVar2 + 1;
      iVar3 = 0;
      pVVar4 = extraout_ECX_00;
      uVar5 = extraout_EDX;
      do {
        FUN_00405e00(local_24,uVar5,pVVar4,(VARIANTARG *)local_24,(ushort *)local_8,1);
        bVar1 = FUN_00405df8((int)local_24);
        if (bVar1) {
          FUN_0046d6d8((VARIANTARG *)local_24,&local_c,extraout_ECX_01,param_4);
        }
        else {
          FUN_00405c34((VARIANTARG *)local_24,&local_c);
        }
        local_24[0] = local_c;
        FUN_004040f0(param_2,3);
        pVVar4 = extraout_ECX_02;
        uVar5 = extraout_EDX_00;
        if (iVar3 == 0) {
          FUN_00402bbc(&stack0xffffffd4,&stack0xffffffd8);
          FUN_00402b8c(&stack0xffffffd4,&DAT_0046d824,2);
          FUN_00403fd4((int *)&stack0xfffffff0,&stack0xffffffd4);
          pVVar4 = extraout_ECX_03;
          uVar5 = extraout_EDX_01;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    FUN_00405c34(local_8,param_2);
  }
  if (*param_2 != 0) {
    FUN_004040f0(param_2,3);
  }
  *in_FS_OFFSET = local_24[0];
  local_24[2] = &LAB_0046d81d;
  local_24[1] = 0x46d808;
  FUN_00405bcc((VARIANTARG *)local_24);
  local_24[1] = 0x46d815;
  FUN_00403dd4((int *)&stack0xfffffff0,2);
  return;
}

