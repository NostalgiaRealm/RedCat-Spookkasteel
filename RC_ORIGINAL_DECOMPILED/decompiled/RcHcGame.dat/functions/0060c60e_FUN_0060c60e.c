/*
 * FUN_0060c60e at 0060c60e
 * undefined FUN_0060c60e(void)
 * Address ranges: 0060c60e-0060c8dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060c60e(byte *param_1,int param_2,byte *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  puVar3 = param_4;
  piVar2 = (int *)param_3;
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*puVar3 == 0)) {
      return;
    }
    DAT_00748ec8 = 0;
    bVar1 = *param_1;
    uVar7 = 0;
    pbVar5 = param_1 + 1;
    do {
      param_3 = pbVar5;
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
      pbVar5 = param_3 + 1;
    } while (*param_3 == bVar1);
    if ((char)bVar1 < 'e') {
      if (bVar1 == 100) {
        if (uVar6 == 0) {
          DAT_00748ec8 = 1;
        }
        else if (uVar6 != 1) {
          if (uVar6 == 2) {
            param_4 = (uint *)0x61;
          }
          else {
            if (uVar6 != 3) goto LAB_0060c692;
            param_4 = (uint *)0x41;
          }
          goto LAB_0060c8c8;
        }
        param_4 = (uint *)0x64;
        goto LAB_0060c8c8;
      }
      if (bVar1 != 0x27) {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x48) {
            if (uVar6 == 0) {
              DAT_00748ec8 = 1;
            }
            else if (uVar7 != 2) goto LAB_0060c692;
            param_4 = (uint *)0x48;
            goto LAB_0060c8c8;
          }
          if (bVar1 == 0x4d) {
            if (uVar6 == 0) {
              DAT_00748ec8 = 1;
            }
            else if (uVar6 != 1) {
              if (uVar6 == 2) {
                param_4 = (uint *)0x62;
              }
              else {
                if (uVar6 != 3) goto LAB_0060c692;
                param_4 = (uint *)0x42;
              }
              goto LAB_0060c8c8;
            }
            param_4 = (uint *)0x6d;
            goto LAB_0060c8c8;
          }
          if (bVar1 != 0x61) goto LAB_0060c692;
        }
        iVar4 = __strcmpi((char *)param_1,"am/pm");
        if (iVar4 == 0) {
          param_3 = param_1 + 5;
        }
        else {
          iVar4 = __strcmpi((char *)param_1,(char *)&PTR_DAT_00651d20);
          if (iVar4 == 0) {
            param_3 = param_1 + 3;
          }
        }
        param_4 = (uint *)0x70;
        goto LAB_0060c8c8;
      }
      if ((uVar7 & 1) == 0) {
        param_3 = param_1 + uVar7;
      }
      else {
        param_3 = param_1 + uVar7;
        while( true ) {
          bVar1 = *param_3;
          if ((bVar1 == 0) || (*puVar3 == 0)) goto LAB_0060c6b8;
          if (bVar1 == 0x27) break;
          if (((PTR_DAT_006b26b0[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
            *(byte *)*piVar2 = bVar1;
            *piVar2 = *piVar2 + 1;
            param_3 = param_3 + 1;
            *puVar3 = *puVar3 - 1;
          }
          *(byte *)*piVar2 = *param_3;
          *piVar2 = *piVar2 + 1;
          param_3 = param_3 + 1;
          *puVar3 = *puVar3 - 1;
        }
        param_3 = param_3 + 1;
      }
    }
    else {
      if (bVar1 == 0x68) {
        if (uVar6 == 0) {
          DAT_00748ec8 = 1;
        }
        else if (uVar7 != 2) goto LAB_0060c692;
        param_4 = (uint *)0x49;
      }
      else if (bVar1 == 0x6d) {
        if (uVar6 == 0) {
          DAT_00748ec8 = 1;
        }
        else if (uVar7 != 2) goto LAB_0060c692;
        param_4 = (uint *)0x4d;
      }
      else if (bVar1 == 0x73) {
        if (uVar6 == 0) {
          DAT_00748ec8 = 1;
        }
        else if (uVar7 != 2) goto LAB_0060c692;
        param_4 = (uint *)0x53;
      }
      else {
        if (bVar1 == 0x74) {
          if (*(int *)(param_2 + 8) < 0xc) {
            pbVar5 = *(byte **)(param_5 + 0x98);
          }
          else {
            pbVar5 = *(byte **)(param_5 + 0x9c);
          }
          while ((0 < (int)uVar7 && (*puVar3 != 0))) {
            if (((PTR_DAT_006b26b0[(uint)*pbVar5 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
              *(byte *)*piVar2 = *pbVar5;
              *piVar2 = *piVar2 + 1;
              pbVar5 = pbVar5 + 1;
              *puVar3 = *puVar3 - 1;
            }
            *(byte *)*piVar2 = *pbVar5;
            *piVar2 = *piVar2 + 1;
            pbVar5 = pbVar5 + 1;
            *puVar3 = *puVar3 - 1;
            uVar7 = uVar7 - 1;
          }
          goto LAB_0060c6b8;
        }
        if (bVar1 != 0x79) {
LAB_0060c692:
          if ((PTR_DAT_006b26b0[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            *(byte *)*piVar2 = bVar1;
            *piVar2 = *piVar2 + 1;
            *puVar3 = *puVar3 - 1;
            param_1 = param_1 + 1;
          }
          *(byte *)*piVar2 = *param_1;
          *piVar2 = *piVar2 + 1;
          param_3 = param_1 + 1;
          *puVar3 = *puVar3 - 1;
          goto LAB_0060c6b8;
        }
        if (uVar6 == 1) {
          param_4 = (uint *)0x79;
        }
        else {
          if (uVar6 != 3) goto LAB_0060c692;
          param_4 = (uint *)0x59;
        }
      }
LAB_0060c8c8:
      FUN_0060c140(param_4,param_2,piVar2,puVar3,param_5);
    }
LAB_0060c6b8:
    bVar1 = *param_3;
    param_1 = param_3;
  } while( true );
}

