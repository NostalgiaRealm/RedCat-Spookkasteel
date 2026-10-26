/*
 * FUN_0045a2ec at 0045a2ec
 * undefined __register FUN_0045a2ec(undefined4 * param_1, VARIANTARG * param_2)
 * Address ranges: 0045a2ec-0045a348;0045a381-0045a44a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045a2ec(undefined4 *param_1,VARIANTARG *param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_1c;
  int local_18;
  byte local_14;
  char local_13;
  VARIANTARG *local_10;
  VARIANTARG *local_c;
  uint local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = (undefined4 *)0x0;
  local_c = (VARIANTARG *)*param_1;
  local_8 = param_1[1];
  puStack_2c = &LAB_0045a44b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_10 = param_2;
  bVar1 = FUN_0045a244((int)&local_c);
  if (bVar1) {
    FUN_00403d94("is an object");
  }
  switch(local_8 & 0xff) {
  case 0:
    FUN_004053dc(local_10,local_c);
    break;
  case 1:
    FUN_004053f4(local_10,(char)local_c);
    break;
  case 2:
    local_13 = (char)local_c;
    local_14 = 1;
    FUN_0040545c(local_10,&local_14);
    break;
  case 3:
    FUN_00405414(local_10);
    break;
  case 4:
    FUN_0040545c(local_10,(byte *)local_c);
    break;
  default:
    FUN_00404e28(local_10,(VARIANTARG *)PTR_DAT_00572068);
    FUN_00409bd8(local_8 & 0xff,(int *)&local_1c);
    FUN_0040407c(&local_18,(undefined4 *)"TVarRecAsVariant: invalid vType",local_1c);
    FUN_00459bd4(local_18);
    break;
  case 0xb:
    FUN_004054ac(local_10,(undefined4 *)local_c);
    break;
  case 0xc:
    FUN_00405444(local_10);
    break;
  case 0xd:
    FUN_00404e28(local_10,local_c);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0045a452;
  puStack_2c = (undefined1 *)0x45a44a;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}

