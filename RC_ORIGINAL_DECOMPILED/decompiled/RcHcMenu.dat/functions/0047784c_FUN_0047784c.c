/*
 * FUN_0047784c at 0047784c
 * undefined __register FUN_0047784c(int param_1)
 * Address ranges: 0047784c-004778b1;004778d9-00477bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047784c(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  int in_stack_ffffffcc;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *local_24;
  undefined1 *local_20;
  byte *local_1c;
  char local_9;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 6;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_00477bbc;
  local_24 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  puVar4 = (undefined4 *)FUN_00477bd0(param_1);
  bVar1 = *(byte *)(param_1 + 0x44);
  if (((((byte)(bVar1 - 6) < 6) || (bVar1 == 0x11)) || (bVar1 == 0x12)) ||
     ((bVar1 == 0x13 || (bVar1 == 0x14)))) {
    switch(bVar1) {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      local_9 = (&DAT_00570826)[bVar1 & 0x7f];
      break;
    default:
      local_9 = '\0';
      break;
    case 0x11:
      local_9 = '\x1e';
      break;
    case 0x12:
      local_9 = '\x01';
      break;
    case 0x13:
      local_9 = '\x02';
      break;
    case 0x14:
      local_9 = '\x1f';
    }
    FUN_004770d8(param_1);
    if (local_9 == '\x1f') {
      if (*(char *)(param_1 + 0x44) != '\x04') {
        iVar7 = 0;
        FUN_004785f0(param_1,(int *)&stack0xffffffe8);
        puVar9 = &stack0xffffffec;
        FUN_00406a48((undefined4 *)PTR_PTR_00572338,(int *)&local_1c);
        FUN_00466e30(local_1c,puVar9,0,iVar7);
      }
      FUN_004770d8(param_1);
      in_stack_ffffffcc = 0;
      puVar8 = puVar4;
      pbVar10 = PTR_DAT_00572140;
      iVar7 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',0x1f,0,puVar4,(VARIANTARG *)PTR_DAT_00572140
                          );
      *(undefined1 *)(iVar7 + 0x20) = 5;
      if (*(char *)(param_1 + 0x44) == '\x05') {
        FUN_00406a48((undefined4 *)PTR_PTR_00572028,(int *)&stack0xffffffd0);
        FUN_00466d84(puVar8,0);
      }
      else {
        uVar5 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
        *(undefined4 *)(iVar7 + 0x28) = uVar5;
        do {
          iVar6 = FUN_00477710(param_1);
          bVar3 = FUN_00475a6c(*(char *)(puVar4 + 8));
          if (bVar3) {
            *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(puVar4 + 8);
          }
          FUN_004121d8(*(int **)(iVar7 + 0x28),iVar6);
          if ((*(char *)(param_1 + 0x44) != '\x10') && (*(char *)(param_1 + 0x44) != '\x05')) {
            iVar6 = 0;
            FUN_004785f0(param_1,(int *)&local_20);
            FUN_00406a48((undefined4 *)PTR_PTR_00572584,(int *)&local_24);
            FUN_00466e30(local_24,&stack0xffffffec,0,iVar6);
          }
          if (*(char *)(param_1 + 0x44) == '\x10') {
            FUN_004770d8(param_1);
          }
          cVar2 = *(char *)(param_1 + 0x44);
        } while ((cVar2 != '\x05') && (cVar2 != '\0'));
        if (cVar2 != '\x05') {
          iVar7 = 0;
          FUN_004785f0(param_1,(int *)&stack0xffffffd8);
          FUN_00406a48((undefined4 *)PTR_PTR_005721c8,(int *)&stack0xffffffd4);
          FUN_00466e30(pbVar10,&stack0xffffffec,0,iVar7);
        }
        FUN_004770d8(param_1);
      }
    }
    else {
      if ((local_9 == '\x01') || (local_9 == '\x02')) {
        in_stack_ffffffcc = 0;
      }
      else {
        in_stack_ffffffcc = FUN_00477bd0(param_1);
      }
      iVar7 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',local_9,in_stack_ffffffcc,puVar4,
                           (VARIANTARG *)PTR_DAT_00572140);
      if (in_stack_ffffffcc != 0) {
        if ((*(char *)(puVar4 + 1) == '\0') && (*(char *)(in_stack_ffffffcc + 4) == '\x01')) {
          *(undefined1 *)(in_stack_ffffffcc + 0x20) = *(undefined1 *)(puVar4 + 8);
          *(undefined4 *)(in_stack_ffffffcc + 0x24) = puVar4[9];
        }
        else if ((*(char *)(in_stack_ffffffcc + 4) == '\0') && (*(char *)(puVar4 + 1) == '\x01')) {
          *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(in_stack_ffffffcc + 0x20);
          puVar4[9] = *(undefined4 *)(in_stack_ffffffcc + 0x24);
        }
      }
      if ((((byte)(*(char *)(puVar4 + 8) - 0xfU) < 7) || ((byte)(*(char *)(puVar4 + 8) - 0x1eU) < 2)
          ) && (local_9 == '\x1e')) {
        if (*(char *)(in_stack_ffffffcc + 4) == '\x01') {
          *(undefined1 *)(in_stack_ffffffcc + 0x20) = 1;
        }
      }
      else if (((local_9 != '\x01') && (local_9 != '\x02')) &&
              (((cVar2 = *(char *)(puVar4 + 8), cVar2 == '\f' ||
                (((byte)(cVar2 - 0xfU) < 7 || ((byte)(cVar2 - 0x1eU) < 2)))) ||
               ((in_stack_ffffffcc != 0 &&
                (((cVar2 = *(char *)(in_stack_ffffffcc + 0x20), cVar2 == '\f' ||
                  ((byte)(cVar2 - 0xfU) < 7)) || ((byte)(cVar2 - 0x1eU) < 2)))))))) {
        puVar8 = (undefined4 *)0x477b37;
        FUN_00406a48((undefined4 *)PTR_PTR_00572030,(int *)&stack0xffffffcc);
        FUN_00466d84(puVar8,0);
      }
      *(undefined1 *)(iVar7 + 0x20) = 5;
      if (in_stack_ffffffcc != 0) {
        bVar3 = FUN_00475a6c(*(char *)(puVar4 + 8));
        if ((bVar3) &&
           (((cVar2 = *(char *)(in_stack_ffffffcc + 0x20), cVar2 == '\x01' ||
             ((byte)(cVar2 - 0x17U) < 2)) || (cVar2 == '#')))) {
          *(undefined1 *)(in_stack_ffffffcc + 0x20) = *(undefined1 *)(puVar4 + 8);
        }
        else {
          bVar3 = FUN_00475a6c(*(char *)(in_stack_ffffffcc + 0x20));
          if ((bVar3) &&
             (((cVar2 = *(char *)(puVar4 + 8), cVar2 == '\x01' || ((byte)(cVar2 - 0x17U) < 2)) ||
              (cVar2 == '#')))) {
            *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(in_stack_ffffffcc + 0x20);
          }
        }
      }
      FUN_00478164(param_1,iVar7,(int)puVar4,in_stack_ffffffcc);
    }
  }
  *in_FS_OFFSET = in_stack_ffffffcc;
  FUN_00403dd4((int *)&stack0xffffffcc,8);
  return;
}

