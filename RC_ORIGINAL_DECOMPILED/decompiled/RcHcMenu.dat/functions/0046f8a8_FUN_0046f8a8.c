/*
 * FUN_0046f8a8 at 0046f8a8
 * undefined4 __register FUN_0046f8a8(int param_1, int param_2)
 * Address ranges: 0046f8a8-0046f938
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046f8a8(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  bool bVar7;
  bool bVar8;
  
  uVar3 = FUN_00405bf8((undefined2 *)(param_1 + 0x18));
  uVar4 = FUN_00405bf8((undefined2 *)(param_2 + 0x18));
  if (CONCAT22(extraout_var_00,uVar3) == CONCAT22(extraout_var_01,uVar4)) {
    uVar5 = FUN_00405c08((short *)(param_1 + 0x18));
    bVar7 = (char)uVar5 == '\0';
    bVar8 = bVar7;
    if (((!bVar7) ||
        (FUN_00405abc((VARIANTARG *)(param_1 + 0x18),(VARIANTARG *)(param_2 + 0x18)), bVar8 = true,
        bVar7)) && (FUN_00404140(*(uint **)(param_1 + 0x2c),*(uint **)(param_2 + 0x2c)), bVar8)) {
      cVar1 = FUN_0046f9c0(param_1);
      cVar2 = FUN_0046f9c0(param_2);
      if (cVar1 == cVar2) {
        uVar5 = FUN_0046f970(param_1);
        uVar6 = FUN_0046f970(param_2);
        if (((char)uVar5 == (char)uVar6) && (*(char *)(param_1 + 0x31) == *(char *)(param_2 + 0x31))
           ) {
          cVar1 = FUN_0046f99c(param_1);
          cVar2 = FUN_0046f99c(param_2);
          if (cVar1 == cVar2) {
            return CONCAT31(extraout_var,1);
          }
        }
      }
    }
  }
  return 0;
}

