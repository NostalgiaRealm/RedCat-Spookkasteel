/*
 * FUN_004055e4 at 004055e4
 * undefined __register FUN_004055e4(VARIANTARG * param_1, VARIANTARG * param_2)
 * Address ranges: 004055e4-00405687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004055e4(VARIANTARG *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  BSTR local_14;
  BSTR local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (OLECHAR *)0x0;
  local_14 = (BSTR)0x0;
  puStack_24 = &LAB_00405688;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_1->n1).n2.vt == 0x100) {
    puStack_20 = &stack0xfffffffc;
    FUN_004052a4((int *)&local_8,param_1);
    FUN_004052a4((int *)&local_c,param_2);
    FUN_00404038((int *)&local_8,local_c);
    FUN_004054ac(param_1,local_8);
  }
  else {
    FUN_004052e0(&local_10,param_1);
    FUN_004052e0(&local_14,param_2);
    FUN_004045d4((int *)&local_10,(undefined4 *)local_14);
    FUN_004054ec(param_1,local_10);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0040568f;
  puStack_24 = (undefined1 *)0x40567a;
  FUN_0040448c(&local_14,2);
  puStack_24 = (undefined1 *)0x405687;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

