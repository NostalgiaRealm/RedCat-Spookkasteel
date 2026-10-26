/*
 * FUN_005b81a0 at 005b81a0
 * undefined FUN_005b81a0(void)
 * Address ranges: 005b81a0-005b845c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005b81a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0xc58);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x19b,&DAT_006b3f70,
                 0);
    return (undefined4 *)0x0;
  }
  puVar7 = puVar1;
  for (iVar3 = 0x316; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  FUN_005b8610(puVar1);
  iVar3 = FUN_005d5cb0();
  if (iVar3 != 0) {
    if (param_1 == 0) {
      local_c = 0xc47a0000;
      local_8 = 0xc47a0000;
      local_4 = 0xc47a0000;
      local_18 = 0x447a0000;
      local_14 = 0x447a0000;
      local_10 = 0x447a0000;
      iVar3 = FUN_005b7f80(&local_c,&local_18);
    }
    else {
      iVar3 = FUN_005b9320(param_1);
    }
    puVar1[6] = iVar3;
    puVar1[0x315] = 1;
    if (iVar3 != 0) {
      uVar2 = FUN_005cf3b0(*(int *)(iVar3 + 0x174) * 0xc);
      *(undefined4 *)(puVar1[6] + 0xd5cc) = uVar2;
      puVar7 = *(undefined4 **)(puVar1[6] + 0xd5cc);
      if (puVar7 != (undefined4 *)0x0) {
        for (uVar4 = *(int *)(puVar1[6] + 0x174) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar3 = FUN_005d1f30(puVar1);
        if (iVar3 != 0) {
          iVar3 = FUN_005cc090(puVar1);
          if (iVar3 != 0) {
            iVar3 = FUN_005d5250(puVar1);
            if (iVar3 != 0) {
              iVar3 = FUN_005d4750(puVar1);
              if (iVar3 != 0) {
                uVar2 = FUN_005d3ff0(puVar1[6] + 200);
                *(undefined4 *)(puVar1[6] + 0x1c8) = uVar2;
                if (*(int *)(puVar1[6] + 0x1c8) != 0) {
                  iVar3 = *(int *)(puVar1[6] + 0x154);
                  if (iVar3 != 0) {
                    FUN_005cf400(iVar3);
                    *(undefined4 *)(puVar1[6] + 0x154) = 0;
                    _DAT_007203c0 = *(undefined4 *)(puVar1[6] + 0x154);
                    *(undefined4 *)(puVar1[6] + 0x154) = 0;
                    *(undefined4 *)(puVar1[6] + 0x1ac) = 0;
                  }
                  iVar3 = FUN_005ba400(puVar1);
                  if (iVar3 == 0) {
                    FUN_005cf220(0xffffffff,&DAT_006b3f70,
                                 s_C__Genesis3D_OpenSource_Source_W_006a9528,0x1e6,&DAT_006b3f70,0);
                    return (undefined4 *)0x0;
                  }
                  iVar3 = FUN_005b6070(puVar1);
                  if (iVar3 != 0) {
                    iVar6 = 0x100;
                    iVar3 = puVar1[6] + 0x210;
                    do {
                      puVar7 = (undefined4 *)(iVar3 + -0x44);
                      for (iVar5 = 0x35; iVar5 != 0; iVar5 = iVar5 + -1) {
                        *puVar7 = 0;
                        puVar7 = puVar7 + 1;
                      }
                      *(undefined4 *)(iVar3 + 0x78) = 0xffffffff;
                      FUN_005b30c0();
                      iVar3 = iVar3 + 0xd4;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                    FUN_005b9540(puVar1[6]);
                    iVar3 = FUN_005b9f30(puVar1 + 7,puVar1[6] + 0xe4);
                    if (iVar3 != 0) {
                      puVar1[3] = 0xffffffff;
                      puVar1[0xee] = 0;
                      puVar1[0xef] = 0;
                      iVar3 = FUN_005b9e80(puVar1);
                      if (iVar3 != 0) {
                        return puVar1;
                      }
                      FUN_005cf220(0xffffffff,&DAT_006b3f70,
                                   s_C__Genesis3D_OpenSource_Source_W_006a9528,0x206,&DAT_006b3f70,0
                                  );
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_005b8460(puVar1);
  return (undefined4 *)0x0;
}

