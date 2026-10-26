/*
 * FUN_00475158 at 00475158
 * undefined __register FUN_00475158(int * param_1, int * param_2, undefined1 param_3)
 * Address ranges: 00475158-0047546f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475158(int *param_1,int *param_2,undefined1 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  byte bVar8;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  byte local_13c [256];
  undefined4 *local_3c;
  byte local_38 [32];
  undefined *local_18;
  int *local_14;
  undefined4 *local_10;
  undefined1 local_a;
  undefined1 local_9;
  int *local_8;
  
  bVar8 = 0;
  puStack_14c = &stack0xfffffffc;
  local_3c = (undefined4 *)0x0;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  puStack_150 = &LAB_00475470;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  local_10 = (undefined4 *)0x0;
  local_a = 0;
  local_14 = param_2;
  local_9 = param_3;
  local_8 = param_1;
LAB_00475197:
  while( true ) {
    uVar3 = (uint)*(byte *)*param_1;
    if (uVar3 < 0x2d) break;
    if (uVar3 < 0x30) {
      if (uVar3 == 0x2e) {
        if (local_10 != (undefined4 *)0x0) {
          FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
          goto LAB_0047545a;
        }
        local_a = 1;
        *param_1 = *param_1 + 1;
      }
      else {
        if (uVar3 != 0x2f) goto LAB_0047544c;
        FUN_0047513c();
        *param_1 = *param_1 + 1;
        cVar2 = *(char *)*param_1;
        if ((cVar2 == '*') || (cVar2 == '/')) goto LAB_004752e2;
      }
    }
    else if (uVar3 - 0x30 < 10) {
      if (local_10 == (undefined4 *)0x0) {
        local_10 = (undefined4 *)*param_1;
        while ((*(char *)*param_1 == '.' || ((byte)(*(char *)*param_1 - 0x30U) < 10))) {
          *param_1 = *param_1 + 1;
        }
        FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
        goto LAB_0047545a;
      }
      *param_1 = *param_1 + 1;
    }
    else if (uVar3 - 0x3c < 3) {
      if (local_10 == (undefined4 *)0x0) {
        local_10 = (undefined4 *)*param_1;
        while ((byte)(*(char *)*param_1 - 0x3cU) < 3) {
          *param_1 = *param_1 + 1;
        }
        FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
        goto LAB_0047545a;
      }
      *param_1 = *param_1 + 1;
    }
    else {
      if (uVar3 - 0x3c == 0x24) goto LAB_0047521c;
LAB_0047544c:
      FUN_0047513c();
      *param_1 = *param_1 + 1;
    }
  }
  if (uVar3 != 0x2c) {
    if (0x20 < uVar3) {
      if ((uVar3 != 0x22) && (uVar3 != 0x27)) goto LAB_0047544c;
LAB_0047521c:
      FUN_0047513c();
      bVar1 = *(byte *)*param_1;
      local_18 = (undefined *)*param_1;
      do {
        *param_1 = *param_1 + 1;
        puVar5 = &DAT_00475480;
        pbVar6 = local_38;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pbVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          pbVar6 = pbVar6 + ((uint)bVar8 * -2 + 1) * 4;
        }
        local_38[(int)(uint)bVar1 >> 3] = local_38[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
      } while ((local_38[(int)(uint)*(byte *)*param_1 >> 3] >> (*(byte *)*param_1 & 7) & 1) == 0);
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
        FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
        local_18 = FUN_004041f4((undefined *)*local_14);
        FUN_004099a8((int *)&local_18,bVar1,(int *)&local_3c);
        FUN_00403e04(local_14,local_3c);
        goto LAB_0047545a;
      }
      *param_1 = (int)local_18;
      *param_1 = *param_1 + 1;
      goto LAB_00475197;
    }
    if (uVar3 != 0x20) {
      if (uVar3 == 0) {
        if (local_10 == (undefined4 *)0x0) {
          FUN_00403db0(local_14);
        }
        else {
          FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
          FUN_00474d00(local_14,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
        }
        goto LAB_0047545a;
      }
      if ((uVar3 != 10) && (uVar3 != 0xd)) goto LAB_0047544c;
    }
  }
  if (local_10 != (undefined4 *)0x0) {
    FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
    FUN_00474d00(local_14,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    goto LAB_0047545a;
  }
  while ((((cVar2 = *(char *)*param_1, cVar2 == '\n' || (cVar2 == '\r')) || (cVar2 == ' ')) ||
         (cVar2 == ','))) {
    *param_1 = *param_1 + 1;
  }
  goto LAB_00475197;
LAB_004752e2:
  if (cVar2 == '*') {
    do {
      *param_1 = *param_1 + 1;
      FUN_00402e54((char *)local_13c,(char *)*param_1);
      bVar7 = local_13c[0] + 1 == 0;
      FUN_00402c8c((int *)local_13c,(int *)&DAT_004754a0,local_13c[0] + 1);
      if (bVar7) break;
    } while ((*(char *)*param_1 != '*') || (*(char *)(*param_1 + 1) != '/'));
  }
  else {
    while (((cVar2 = *(char *)*param_1, cVar2 != '\0' && (cVar2 != '\n')) && (cVar2 != '\r'))) {
      *param_1 = *param_1 + 1;
    }
  }
  FUN_00403e98(local_14,local_10,*param_1 - (int)local_10);
LAB_0047545a:
  *in_FS_OFFSET = uStack_154;
  puStack_14c = &LAB_00475477;
  puStack_150 = (undefined1 *)0x47546f;
  FUN_00403db0((int *)&local_3c);
  return;
}

