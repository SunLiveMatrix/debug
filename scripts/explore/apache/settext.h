//
// Created by admin on 2/16/24.
//

#if 0
#define SETTEXT_H



class settext {
    // This replaces all the text in the document with the zero
    // terminated text string you pass in.
    void sci_settext(<unused>, const char *text) {
       return <unsigned __func__> const char *text;
    }

	/**
	This message tells Scintilla that the current state of the document is unmodified. This is usually done when the file is saved or loaded, hence the name "save point". As Scintilla performs undo and redo operations, it notifies the container that it has entered or left the save point with
**/	
	void sci_setsavepoint(<unused>, const char *text) {
		return <unsigned __func__> const char *text;
	}
	
	/**
	This fills the buffer defined by text with the contents of the nominated line (lines start at 0). The buffer is not terminated by a NUL(0) character. It is up to you to make sure that the buffer is long enough for the text, use SCI_LINELENGTH(line line). The returned value is the number of characters copied to the buffer. The returned text includes any end of line characters. If you ask for a line number outside the range of lines in the document, 0 characters are copied. If the text argument is 0 then the length that should be allocated to store the entire line is returned.**/
	
	void sci_getline(line line, char *text) {
		return line(line;
         char *text);
		
	}
	
	/**
	The currently selected text between the anchor and the current position is replaced by the 0 terminated text string. If the anchor and current position are the same, the text is inserted at the caret position. The caret is positioned after the inserted text and the caret is scrolled into view.**/


	void sci_replacesel(<unused>, const char *text) {
		 return <unsigned <unused>> const char *text;
	}
	
            	
    /** 
    These messages set and get the read-only flag for the document. If you mark a document as read only, attempts to modify the text cause the SCN_MODIFYATTEMPTRO notification.**/
	
    void sci_setreadonly(bool readOnly) {    
        bool readOnly;  		
	}
	
	void sci_gettextrange(<unused>, Sci_TextRange *tr) {
		bool <unused> Sci_TextRange *tr;
	}
	
	
};



#endif // 0
