/*
 * FUN_0046ffa4 at 0046ffa4
 * undefined __register FUN_0046ffa4(int param_1, double * param_2)
 * Address ranges: 0046ffa4-0046ffe5;00470046-0047021b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ffa4(int param_1,double *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  byte *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  byte *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;
  
  puStack_38 = &stack0xfffffffc;
  local_2c = (byte *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_18 = (byte *)0x0;
  puStack_3c = &LAB_0047021c;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  bVar1 = FUN_0046f9c0(param_1);
  switch(bVar1 & 0x7f) {
  case 0:
    piVar3 = FUN_0047052c(param_1);
    FUN_00406a48((undefined4 *)PTR_PTR_00572510,(int *)&local_18);
    local_20 = *(undefined4 *)(param_1 + 0x2c);
    local_1c = 0xb;
    FUN_00466e30(local_18,&local_20,0,(int)piVar3);
    break;
  case 1:
  case 0x17:
    FUN_0040a34c((char *)param_2,(int *)&local_24);
    piVar3 = (int *)0x47008d;
    FUN_00470868(param_1,local_24);
    break;
  case 2:
    piVar3 = (int *)0x4700ab;
    FUN_00470810(param_1,(int)*(short *)param_2);
    break;
  case 3:
  case 0xe:
    piVar3 = (int *)0x4700b9;
    FUN_00470744(param_1,*(undefined4 *)param_2);
    break;
  case 4:
    piVar3 = (int *)0x47009c;
    FUN_004707b8(param_1,(uint)*(ushort *)param_2);
    break;
  case 5:
    piVar3 = (int *)0x4701a7;
    FUN_00470568(param_1,*(short *)param_2 != 0);
    break;
  case 6:
    piVar3 = (int *)((ulonglong)*param_2 >> 0x20);
    FUN_004705dc(param_1);
    break;
  case 7:
    piVar3 = (int *)((ulonglong)(longlong)ROUND(*param_2 * 10000.0) >> 0x20);
    FUN_00470664(param_1);
    break;
  case 8:
    uVar2 = FUN_00466f2c((byte *)param_2,&local_c);
    if ((char)uVar2 == '\0') {
      piVar3 = (int *)0x0;
      FUN_004706bc(param_1);
    }
    else {
      piVar3 = local_c._4_4_;
      FUN_004706bc(param_1);
    }
    break;
  case 9:
    local_14 = 0;
    local_10 = *(undefined4 *)param_2;
    FUN_0040ac38();
    piVar3 = (int *)((ulonglong)(double)in_ST0 >> 0x20);
    FUN_0047091c(param_1);
    break;
  case 10:
    local_14 = *(undefined4 *)param_2;
    local_10 = 0xa955a;
    FUN_0040ac38();
    piVar3 = (int *)((ulonglong)(double)in_ST0 >> 0x20);
    FUN_00470974(param_1);
    break;
  case 0xb:
    local_14 = 0;
    local_10 = *(undefined4 *)param_2;
    FUN_0040ac68(&local_20,extraout_EDX,extraout_ECX,(longlong)ROUND(*param_2));
    FUN_0040ac38();
    piVar3 = (int *)((ulonglong)(double)in_ST0 >> 0x20);
    FUN_004709cc(param_1);
    break;
  default:
    piVar3 = FUN_0047052c(param_1);
    FUN_00406a48((undefined4 *)PTR_PTR_005720b8,(int *)&local_2c);
    local_20 = *(undefined4 *)(param_1 + 0x2c);
    local_1c = 0xb;
    FUN_00466e30(local_2c,&local_20,0,(int)piVar3);
    break;
  case 0x10:
    FUN_0040a34c((char *)param_2,(int *)&local_28);
    piVar3 = (int *)0x4701bd;
    FUN_00470b3c(param_1,local_28);
    break;
  case 0x16:
    piVar3 = (int *)0x4701c9;
    FUN_004053dc((VARIANTARG *)(param_1 + 0x18),0);
  }
  *in_FS_OFFSET = piVar3;
  puStack_3c = &LAB_00470223;
  uStack_40 = 0x470213;
  FUN_00403dd4((int *)&local_2c,3);
  uStack_40 = 0x47021b;
  FUN_00403db0((int *)&local_18);
  return;
}

