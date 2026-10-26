/*
 * FUN_0054b9e4 at 0054b9e4
 * undefined __register FUN_0054b9e4(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 0054b9e4-0054bc57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b9e4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_EDX;
  int iVar7;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  int *piVar9;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  undefined4 uStack_21c;
  undefined1 *puStack_218;
  undefined1 *puStack_214;
  int local_20c;
  int local_208;
  int local_204;
  byte *local_200;
  int local_1fc;
  int local_1f8;
  undefined1 local_1f4;
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8 [115];
  int local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_214 = &stack0xfffffffc;
  local_208 = 0;
  local_20c = 0;
  local_200 = (byte *)0x0;
  local_204 = 0;
  local_1fc = 0;
  local_1f0 = 0;
  local_1ec = 0;
  local_10 = (byte *)0x0;
  puStack_218 = &LAB_0054bc95;
  uStack_21c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_21c;
  puStack_220 = (undefined1 *)0x54ba41;
  local_c = param_2;
  local_8 = param_1;
  FUN_00406dc2(local_1e8,(char *)*param_2);
  puStack_220 = (undefined1 *)0x54ba4c;
  FUN_00407043((undefined *)local_1e8);
  puStack_220 = (undefined1 *)0x54ba51;
  FUN_004028b8();
  puStack_224 = &LAB_0054bc58;
  uStack_228 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_228;
  local_1c = 0;
  puStack_220 = &stack0xfffffffc;
  while( true ) {
    FUN_00406ea0((undefined *)local_1e8);
    cVar1 = FUN_004028b8();
    if (cVar1 != '\0') break;
    FUN_004043f0((undefined *)local_1e8,(int *)&local_10);
    FUN_00406fe0((undefined *)local_1e8);
    uVar2 = FUN_004028b8();
    bVar8 = SCARRY4(local_1c,1);
    local_1c = local_1c + 1;
    if (bVar8) {
      thunk_FUN_00402874(uVar2);
    }
    FUN_00409690(local_10,&local_1ec);
    FUN_00403e48((int *)&local_10,local_1ec);
    if (local_10 != (byte *)0x0) {
      iVar3 = FUN_0040431c("REM",(char *)local_10);
      if (iVar3 != 1) {
        local_18 = FUN_0040431c("GLOBAL CONST",(char *)local_10);
        if (local_18 != 1) {
          local_1f8 = local_1c;
          local_1f4 = 0;
          FUN_0040a894((byte *)"No prefix on line %d",&local_1f8,0,&local_1f0);
          FUN_00403d94(local_1f0);
        }
        local_14 = FUN_0040431c("=",(char *)local_10);
        uVar2 = local_18 + 0xc;
        if (SCARRY4(local_18,0xc)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
        if (local_14 <= (int)uVar2) {
          local_1f8 = local_1c;
          local_1f4 = 0;
          FUN_0040a894((byte *)"No separator on line %d",&local_1f8,0,&local_1fc);
          FUN_00403d94(local_1fc);
        }
        piVar6 = &local_204;
        uVar4 = FUN_00404030((int)local_10);
        iVar3 = local_14 + 1;
        uVar2 = uVar4;
        if (SCARRY4(local_14,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
          uVar2 = extraout_ECX;
          iVar3 = extraout_EDX;
        }
        iVar7 = iVar3 + 1;
        if (SCARRY4(iVar3,1)) {
          thunk_FUN_00402874(uVar4);
          uVar2 = extraout_ECX_00;
          iVar7 = extraout_EDX_00;
        }
        FUN_00404238((int)local_10,iVar7,uVar2,piVar6);
        FUN_00409924(local_204,(int *)&local_200);
        uVar5 = FUN_00409c44(local_200);
        piVar6 = &local_20c;
        iVar3 = local_14 + -1;
        piVar9 = piVar6;
        if (SBORROW4(local_14,1)) {
          piVar6 = (int *)thunk_FUN_00402874((uint)piVar6);
          iVar3 = extraout_ECX_01;
        }
        uVar2 = iVar3 - 0xc;
        if (SBORROW4(iVar3,0xc)) {
          piVar6 = (int *)thunk_FUN_00402874((uint)piVar6);
          uVar2 = extraout_ECX_02;
        }
        iVar3 = local_18 + 0xc;
        if (SCARRY4(local_18,0xc)) {
          thunk_FUN_00402874((uint)piVar6);
          uVar2 = extraout_ECX_03;
          iVar3 = extraout_EDX_01;
        }
        FUN_00404238((int)local_10,iVar3,uVar2,piVar9);
        FUN_00409924(local_20c,&local_208);
        (**(code **)(*(int *)*local_8 + 0x38))((int *)*local_8,local_208,uVar5);
      }
    }
  }
  *in_FS_OFFSET = uStack_228;
  puStack_220 = &LAB_0054bc5f;
  puStack_224 = (undefined1 *)0x54bc52;
  FUN_00406e64((undefined *)local_1e8);
  puStack_224 = (undefined1 *)0x54bc57;
  FUN_004028b8();
  return;
}

